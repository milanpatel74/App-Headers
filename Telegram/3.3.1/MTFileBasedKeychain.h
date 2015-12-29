//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTKeychain.h"

@class NSData, NSMutableDictionary, NSString;

@interface MTFileBasedKeychain : NSObject <MTKeychain>
{
    NSString *_name;
    _Bool _encrypted;
    NSData *_aesKey;
    NSData *_aesIv;
    NSString *_documentsPath;
    struct _opaque_pthread_mutex_t _TG_SYNCHRONIZED__dictByGroup;
    NSMutableDictionary *_dictByGroup;
}

+ (id)keychainWithName:(id)arg1 documentsPath:(id)arg2;
+ (id)unencryptedKeychainWithName:(id)arg1 documentsPath:(id)arg2;
- (void).cxx_destruct;
- (void)dropGroup:(id)arg1;
- (void)removeObjectForKey:(id)arg1 group:(id)arg2;
- (id)objectForKey:(id)arg1 group:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 group:(id)arg3;
- (void)_storeKeychain:(id)arg1;
- (void)_loadKeychainIfNeeded:(id)arg1;
- (id)filePathForName:(id)arg1 group:(id)arg2;
- (id)initWithName:(id)arg1 documentsPath:(id)arg2 encrypted:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

