/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:35:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BAB6B524-089F-49C7-9E02-F76A6A5EBF73/CARROT.app/CARROT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CARROT/NSCoding.h>

@class NSMutableDictionary;

@interface FlurryDataSenderIndex : NSObject <NSCoding> {

	char _sentReportSuccessfully;
	NSMutableDictionary* _indexMap;

}

@property (assign,nonatomic) char sentReportSuccessfully;                 //@synthesize sentReportSuccessfully=_sentReportSuccessfully - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * indexMap;              //@synthesize indexMap=_indexMap - In the implementation block
+(id)instantiatedIndex;
-(void)setupForCurrentDataKey:(id)arg1 ;
-(void)addBlockInfo:(id)arg1 forDataKey:(id)arg2 ;
-(void)removeBlockInfoWithIdentifier:(id)arg1 forDataKey:(id)arg2 ;
-(char)sentReportSuccessfully;
-(void)setSentReportSuccessfully:(char)arg1 ;
-(char)discardOutdatedBlocksForDataKey:(id)arg1 ;
-(id)notSentBlocksForDataKey:(id)arg1 ;
-(void)setIndexMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)indexMap;
-(void)saveState;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
@end
