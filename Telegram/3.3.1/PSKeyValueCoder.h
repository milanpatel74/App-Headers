//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PSKeyValueCoder : NSObject
{
}

+ (Class)classForName:(id)arg1;
- (id)decodeInt32DictionaryForCKey:(const char *)arg1;
- (id)decodeInt32ArrayForCKey:(const char *)arg1;
- (id)decodeObjectsByKeys;
- (void)decodeBytesForCKey:(const char *)arg1 value:(char *)arg2 length:(unsigned long long)arg3;
- (id)decodeDataCorCKey:(const char *)arg1;
- (id)decodeArrayForCKey:(const char *)arg1;
- (id)decodeArrayForKey:(id)arg1;
- (id)decodeObjectForCKey:(const char *)arg1;
- (long long)decodeInt64ForCKey:(const char *)arg1;
- (int)decodeInt32ForCKey:(const char *)arg1;
- (id)decodeStringForCKey:(const char *)arg1;
- (void)encodeInt32Dictionary:(id)arg1 forCKey:(const char *)arg2;
- (void)encodeInt32Array:(id)arg1 forCKey:(const char *)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forCKey:(const char *)arg3;
- (void)encodeData:(id)arg1 forCKey:(const char *)arg2;
- (void)encodeArray:(id)arg1 forCKey:(const char *)arg2;
- (void)encodeArray:(id)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forCKey:(const char *)arg2;
- (void)encodeInt64:(long long)arg1 forCKey:(const char *)arg2;
- (void)encodeInt32:(int)arg1 forCKey:(const char *)arg2;
- (void)encodeString:(id)arg1 forCKey:(const char *)arg2;
- (id)decodeObjectForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (id)decodeStringForKey:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeString:(id)arg1 forKey:(id)arg2;

@end

