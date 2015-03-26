###SSDB vs Redis Commands
####*string*
redis | ssdb
------|
get|get
set|set
getset|getset
setnx|setnx
del|multi_del
msetnx|msetnx
exists|exists
incr|incr
decr|decr
ttl|ttl
expire|expire
getbit|getbit
setbit|setbit
strlen|strlen
bitcount |redis_bitcount
substr |getrange
getrange |getrange
keys |keys
setrange |setrange
scan |redis_scan 
####*hash*
redis | ssdb
------|
hset|hset
hget|hget
hexists|hexists
del |multi_del
mset |multi_set
incrby |incr
decrby |decr
hmset| multi_set
hmdel |multi_del
hlen |hsize
hincrby |hincr
mget |multi_get
hmget |multi_hget
hgetall | hgetall
hkeys | hkeys
hvals | hvals
hscan | redis_hscan
####*set*
redis | ssdb
------|
sadd |sadd
sismember | sismember
 srem | srem
 scard | scard
 smembers | smembers
 smove | smove
 sscan | redis_sscan
 sinter | sinter
 sunion | sunion
 sdiff | sdiff
 sinterstore | sinterstore
 sunionstore  | sunionstore
 sdiffstore  | sdiffstore
####*list*
redis | ssdb
------|
lpush| qpush_front
rpush | qpush_back
lpushx | qpushx_front
rpushx | qpushx_back
lpop | qpop_front
rpop | qpop_back
llen | qsize
lsize | qsize
lindex | qget
lset | qset
lrange | qslice 
####*zset*
redis | ssdb
------|
zcard |zsize
zscore |zget
zrem | multi_zdel
zrank |zrank
zrevrank | zrrank
zcount | zcount
zremrangebyrank | zremrangebyrank
zremrangebyscore | zremrangebyscore
zinterstore | zinterstore
zunionstore | zunionstore
zrange | zrange
zrevrange | zrevrange
zadd | multi_zset
zincrby | zincr
zrangebyscore | zrangebyscore
zrevrangebyscore | zrevrangebyscore
zscan | redis_zscan
####*other*
redis | ssdb
------|
info|info
auth | auth
ping | ping
dbsize | dbsize
config get | config get
config set | config set
config rewrite | config rewrite


 







