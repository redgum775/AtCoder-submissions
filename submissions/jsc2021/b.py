n, m = map(int, input().split())
n = list(map(int, input().split()))
m = list(map(int, input().split()))

n_m_sym_diff = set(n)^set(m)
L = [str(a) for a in sorted(n_m_sym_diff)]
print(' '.join(L))
