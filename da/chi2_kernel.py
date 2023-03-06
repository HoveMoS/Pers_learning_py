from sklearn.svm import SVC

from sklearn.metrics.pairwise import chi2_kernel

X = [[0, 1], [1, 0], [.2, .8], [.7, .3]]
y = [0, 1, 0, 1]
K = chi2_kernel(X, gamma=.5)
K


svm = SVC(kernel='precomputed').fit(K, y)
svm.predict(K)
