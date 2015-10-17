/*
* This header is generated by classdump-dyld 0.7
* on Saturday, October 17, 2015 at 5:38:48 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/65DBB537-6872-4D18-8EFD-8C10AB6C53BD/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <ReactiveViewModel/RVMViewModel.h>

@class IRCQuery, NSString;

@interface PLVQueryDetailViewModel : RVMViewModel {

	IRCQuery* _query;
	NSString* _queryName;

}

@property (nonatomic,readonly) IRCQuery * query;                //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSString * queryName;              //@synthesize queryName=_queryName - In the implementation block
-(NSString *)queryName;
-(void)deleteQuery;
-(id)attributedStringForEventIndex:(long long)arg1 ;
-(id)nickListViewModel;
-(id)previousQueryDetailViewModel;
-(id)nextQueryDetailViewModel;
-(void)setQueryName:(NSString *)arg1 ;
-(IRCQuery *)query;
-(id)initWithModel:(id)arg1 ;
-(long long)numberOfEvents;
@end

