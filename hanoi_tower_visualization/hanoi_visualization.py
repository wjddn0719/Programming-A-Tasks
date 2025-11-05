def hanoi_solution(n, source, destination, auxiliary, moves):
    """
    Recursive function to solve Tower of Hanoi problem and record moves
    """
    if n == 1:
        moves.append((1, source, destination))
    else:
        hanoi_solution(n-1, source, auxiliary, destination, moves)
        moves.append((n, source, destination))
        hanoi_solution(n-1, auxiliary, destination, source, moves)


def print_towers(towers, num_disks):
    """
    Print the current state of all three towers
    """
    # Find the tallest tower to determine how many rows to print
    max_height = max(len(tower) for tower in towers.values())
    max_height = max(max_height, num_disks)
    
    # Print from top to bottom
    for level in range(max_height - 1, -1, -1):
        row = ''
        for tower_name in ['A', 'B', 'C']:
            tower = towers[tower_name]
            if level < len(tower):
                disk_size = tower[level]
                disk_str = ' ' * (num_disks - disk_size) + '#' * (2 * disk_size - 1) + ' ' * (num_disks - disk_size)
                row += f'  {disk_str}  '
            else:
                row += f'  {" " * num_disks}|{" " * num_disks}  '
        print(row)
    
    # Print the base
    base = ' ' * (num_disks - 1) + 'A' + ' ' * num_disks + ' ' * (num_disks - 1) + 'B' + ' ' * num_disks + ' ' * (num_disks - 1) + 'C' + ' ' * num_disks
    print(base)
    print()


def update_towers(towers, disk, source, destination):
    """
    Move a disk from source to destination tower
    """
    # Remove the disk from source tower
    towers[source].remove(disk)
    # Place the disk on destination tower
    towers[destination].append(disk)
    # Keep the tower sorted with largest disk at bottom
    towers[destination].sort(reverse=True)


def visualize_hanoi(num_disks):
    """
    Visualize the Tower of Hanoi solution step by step
    """
    # Initialize towers
    towers = {
        'A': list(range(num_disks, 0, -1)),  # Tower A has all disks initially
        'B': [],  # Tower B is empty
        'C': []   # Tower C is empty
    }
    
    moves = []
    hanoi_solution(num_disks, 'A', 'C', 'B', moves)
    
    print(f'Solving Tower of Hanoi with {num_disks} disks')
    print('='*50)
    
    print('Initial state:')
    print_towers(towers, num_disks)
    
    for i, (disk, source, dest) in enumerate(moves, 1):
        print(f'Step {i}: Move disk {disk} from tower {source} to tower {dest}')
        
        # Update towers
        update_towers(towers, disk, source, dest)
        
        # Print current state
        print_towers(towers, num_disks)
    
    print(f'Solution completed in {len(moves)} moves!')


def main():
    """
    Main function to run the Tower of Hanoi visualization
    """
    print('Tower of Hanoi Visualization')
    print()
    
    # For testing purposes, using a fixed value instead of input
    num_disks = 3  # Default for testing
    
    print()
    visualize_hanoi(num_disks)


if __name__ == '__main__':
    main()
