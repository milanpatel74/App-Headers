/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCursor.h>

@class PTHTweetbotCollection;

@interface PTHTweetbotCollectionStatusesCursor : PTHTweetbotCursor {

	PTHTweetbotCollection* _collection;

}

@property (nonatomic,__weak,readonly) PTHTweetbotCollection * collection;              //@synthesize collection=_collection - In the implementation block
+(Class)itemClass;
-(id)requestURLString;
-(BOOL)needsSort;
-(id)itemsArrayFromResponse:(id)arg1 ;
-(void)processItems:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_statusAdded:(id)arg1 ;
-(void)_statusRemoved:(id)arg1 ;
-(id)queryDictionary;
-(id)initWithCollection:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(id)arg1 ;
-(PTHTweetbotCollection *)collection;
@end
