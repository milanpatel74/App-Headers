/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class TFNTwitterScribeContext;

@interface T1StatusTableRowAdapterLogger : NSObject {

	TFNTwitterScribeContext* _scribeContext;

}

@property (nonatomic,readonly) TFNTwitterScribeContext * scribeContext;              //@synthesize scribeContext=_scribeContext - In the implementation block
-(TFNTwitterScribeContext *)scribeContext;
-(id)initWithScribeContext:(id)arg1 ;
-(void)logPromotedEvent:(long long)arg1 forStatusCell:(id)arg2 inTableViewController:(id)arg3 ;
-(void)scribeMediaForwardTapForStatusCell:(id)arg1 inTableViewController:(id)arg2 defaultAction:(id)arg3 section:(id)arg4 defaultElement:(id)arg5 ;
-(void)scribeRevenueForwardTapForStatusCell:(id)arg1 inTableViewController:(id)arg2 action:(id)arg3 section:(id)arg4 element:(id)arg5 ;
-(void)scribeDismissTweetForStatus:(id)arg1 inTableViewController:(id)arg2 section:(id)arg3 component:(id)arg4 element:(id)arg5 action:(id)arg6 ;
-(void)scribeSearchForQuery:(id)arg1 status:(id)arg2 account:(id)arg3 element:(id)arg4 ;
-(void)scribeTapOnUser:(id)arg1 account:(id)arg2 ;
@end
