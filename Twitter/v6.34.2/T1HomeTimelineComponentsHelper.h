/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class TFNTwitterAccount, T1HomeTimelineItemsViewController;

@interface T1HomeTimelineComponentsHelper : NSObject {

	TFNTwitterAccount* _account;
	T1HomeTimelineItemsViewController* _viewController;

}

@property (nonatomic,retain) TFNTwitterAccount * account;                                            //@synthesize account=_account - In the implementation block
@property (assign,nonatomic,__weak) T1HomeTimelineItemsViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(BOOL)_sectionIsValid:(long long)arg1 ;
-(id)suggestsModuleInSection:(long long)arg1 ;
-(BOOL)sectionHasGapAtEnd:(long long)arg1 ;
-(BOOL)_carouselIsLastItemInSection:(long long)arg1 ;
-(BOOL)_carouselIsAtRow:(long long)arg1 inSection:(long long)arg2 ;
-(id)initWithViewController:(id)arg1 account:(id)arg2 ;
-(BOOL)sectionShouldHaveFooter:(long long)arg1 ;
-(void)setViewController:(T1HomeTimelineItemsViewController *)arg1 ;
-(T1HomeTimelineItemsViewController *)viewController;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end
