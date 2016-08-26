/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSString, NSNumber, NSDate, NSData;

@interface FBDiskCacheItem : NSObject {

	const DiskCacheItem* _diskCacheItem;

}

@property (nonatomic,copy,readonly) NSString * key; 
@property (nonatomic,copy,readonly) NSString * fileName; 
@property (nonatomic,copy,readonly) NSNumber * size; 
@property (nonatomic,readonly) BOOL hasInlineData; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,copy,readonly) NSDate * lastAccessDate; 
@property (nonatomic,copy,readonly) NSData * extra; 
-(NSData *)extra;
-(id)initWithDiskCacheItem:(const DiskCacheItem*)arg1 ;
-(BOOL)hasInlineData;
-(NSNumber *)size;
-(NSString *)key;
-(NSDate *)modificationDate;
-(NSDate *)lastAccessDate;
-(NSString *)fileName;
@end
