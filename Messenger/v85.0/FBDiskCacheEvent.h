/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString, NSNumber, NSError;

@interface FBDiskCacheEvent : NSObject {

	DiskCacheEvent* _diskCacheEvent;

}

@property (nonatomic,readonly) DiskCacheEvent diskCacheEvent;                  //@synthesize diskCacheEvent=_diskCacheEvent - In the implementation block
@property (nonatomic,copy,readonly) NSString * key; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) NSNumber * size; 
@property (nonatomic,readonly) NSNumber * age; 
@property (nonatomic,readonly) unsigned long long evictionReason; 
@property (nonatomic,copy,readonly) NSString * tag; 
@property (nonatomic,readonly) NSError * error; 
-(DiskCacheEvent)diskCacheEvent;
-(id)initWithDiskCacheEvent:(const DiskCacheEvent*)arg1 ;
-(unsigned long long)evictionReason;
-(NSNumber *)size;
-(NSString *)name;
-(NSString *)key;
-(NSString *)tag;
-(NSNumber *)age;
-(NSError *)error;
@end
