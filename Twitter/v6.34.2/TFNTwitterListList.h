/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@class TFNTwitterAccount, NSString, NSArray;

@interface TFNTwitterListList : NSObject {

	SCD_Struct_T119 _listListFlags;
	TFNTwitterAccount* _account;
	NSString* _nextCursor;
	NSString* _previousCursor;
	NSArray* _lists;

}

@property (assign,nonatomic,__weak) TFNTwitterAccount * account;              //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSString * nextCursor;                             //@synthesize nextCursor=_nextCursor - In the implementation block
@property (nonatomic,copy) NSString * previousCursor;                         //@synthesize previousCursor=_previousCursor - In the implementation block
@property (nonatomic,retain) NSArray * lists;                                 //@synthesize lists=_lists - In the implementation block
@property (nonatomic,readonly) NSString * emptyStreamMessage; 
@property (nonatomic,readonly) NSString * emptyStreamSubtext; 
+(id)paginatedListsWithJSONData:(id)arg1 error:(id*)arg2 ;
+(id)paginatedListsWithJSONDictionary:(id)arg1 ;
-(void)loadNext;
-(void)removeList:(id)arg1 ;
-(void)addList:(id)arg1 ;
-(NSString *)emptyStreamMessage;
-(void)markAtEnd;
-(void)setNextCursor:(NSString *)arg1 ;
-(void)setPreviousCursor:(NSString *)arg1 ;
-(id)_dummyListOfType:(long long)arg1 ;
-(void)_loadNext;
-(NSString *)previousCursor;
-(NSString *)nextCursor;
-(void)_addLists:(id)arg1 ;
-(void)loadNextOnRequester:(id)arg1 ;
-(NSString *)emptyStreamSubtext;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(NSArray *)lists;
-(void)setLists:(NSArray *)arg1 ;
@end
