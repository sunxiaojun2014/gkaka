#sudo yum install zlib zlib-devel openssl openssl--devel pcre pcre-devel
#sudo apt install libpcre3 libpcre3-dev libssl-dev
INSTALLPATH=/usr/local/nginx
./auto/configure \
	--prefix=${INSTALLPATH} \
	--conf-path=${INSTALLPATH}/conf/nginx.conf \
	--error-log-path=${INSTALLPATH}/logs/error.log \
	--http-log-path=${INSTALLPATH}/logs/access.log \
	--http-client-body-temp-path=${INSTALLPATH}/client-body \
	--http-proxy-temp-path=${INSTALLPATH}/proxy \
	--http-fastcgi-temp-path=${INSTALLPATH}/fastcgi \
	--http-uwsgi-temp-path=${INSTALLPATH}/uwsgi \
	--http-scgi-temp-path=${INSTALLPATH}/scgi \
	--pid-path=${INSTALLPATH}/nginx.pid \
	--with-http_ssl_module \
	--with-debug \
	--with-cc-opt='-O0 -g'
