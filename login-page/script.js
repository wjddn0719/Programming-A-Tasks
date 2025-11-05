document.addEventListener('DOMContentLoaded', function() {
    const form = document.getElementById('loginForm');
    const messageElement = document.getElementById('message');
    
    // 간단한 사용자 정보 (실제 애플리케이션에서는 서버에서 검증해야 합니다)
    const validUsers = [
        { username: 'admin', password: 'admin123' },
        { username: 'user', password: 'user123' },
        { username: 'test', password: 'test123' }
    ];
    
    form.addEventListener('submit', function(e) {
        e.preventDefault(); // 폼 기본 제출 동작 방지
        
        const username = document.getElementById('username').value;
        const password = document.getElementById('password').value;
        
        // 사용자 정보 검증
        const user = validUsers.find(u => u.username === username && u.password === password);
        
        if (user) {
            messageElement.textContent = '로그인 성공! 환영합니다, ' + username + '님!';
            messageElement.className = 'success';
            
            // 성공 시 페이지 리다이렉션 (예시)
            setTimeout(function() {
                alert('로그인에 성공했습니다. 메인 페이지로 이동합니다.');
                // 실제 애플리케이션에서는 다음처럼 리다이렉션:
                // window.location.href = 'dashboard.html';
            }, 1000);
        } else {
            messageElement.textContent = '사용자 이름 또는 비밀번호가 잘못되었습니다.';
            messageElement.className = 'error';
            
            // 실패 시 잠시 후 메시지 초기화
            setTimeout(function() {
                messageElement.textContent = '';
                messageElement.className = '';
            }, 3000);
        }
    });
    
    // 비밀번호 표시/숨기기 기능 추가 (선택적)
    const passwordField = document.getElementById('password');
    const showPasswordBtn = document.createElement('button');
    showPasswordBtn.type = 'button';
    showPasswordBtn.textContent = '비밀번호 표시';
    showPasswordBtn.style.marginTop = '5px';
    showPasswordBtn.style.fontSize = '12px';
    showPasswordBtn.style.background = 'none';
    showPasswordBtn.style.border = 'none';
    showPasswordBtn.style.color = '#666';
    showPasswordBtn.style.cursor = 'pointer';
    
    const inputGroup = passwordField.parentNode;
    inputGroup.appendChild(showPasswordBtn);
    
    let passwordVisible = false;
    showPasswordBtn.addEventListener('click', function() {
        passwordVisible = !passwordVisible;
        passwordField.type = passwordVisible ? 'text' : 'password';
        showPasswordBtn.textContent = passwordVisible ? '비밀번호 숨기기' : '비밀번호 표시';
    });
});
