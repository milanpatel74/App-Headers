/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ACTPingerStore : NSObject {

	NSMutableDictionary* _transientStore;

}

@property (nonatomic,readonly) unsigned long long maxEntries; 
@property (nonatomic,retain) NSMutableDictionary * transientStore;              //@synthesize transientStore=_transientStore - In the implementation block
+(id)persistedPingers;
-(id)initFromStorage;
-(id)allPingers;
-(id)initWithPingers:(id)arg1 ;
-(NSMutableDictionary *)transientStore;
-(void)persistStore;
-(unsigned long long)maxEntries;
-(void)addPinger:(id)arg1 ;
-(void)removePinger:(id)arg1 ;
-(void)setTransientStore:(NSMutableDictionary *)arg1 ;
-(id)init;
@end
