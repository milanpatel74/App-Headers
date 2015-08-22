/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNDataViewSectionController.h>
#import <Twitter/T1SuggestsModuleHeaderViewDelegate.h>

@class NSArray, T1PlaygroundSuggestsModule, TFNTwitterUserRecommendationsList, TFNTwitterAccount, NSString;

@interface T1PlaygroundSuggestsDataViewSectionController : TFNDataViewSectionController <T1SuggestsModuleHeaderViewDelegate> {

	NSArray* _items;
	T1PlaygroundSuggestsModule* _suggestsModule;
	TFNTwitterUserRecommendationsList* _userList;
	TFNTwitterAccount* _account;

}

@property (nonatomic,retain) NSArray * items;                                           //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) T1PlaygroundSuggestsModule * suggestsModule;               //@synthesize suggestsModule=_suggestsModule - In the implementation block
@property (nonatomic,retain) TFNTwitterUserRecommendationsList * userList;              //@synthesize userList=_userList - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * account;                               //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sectionControllerWithDataViewController:(id)arg1 suggestModule:(id)arg2 ;
-(unsigned long long)sectionBreaksForIndexPath:(id)arg1 ;
-(void)willDisplayCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)didMoveFromDataViewController:(id)arg1 ;
-(id)calculatedLayoutMetricsForItemAtIndexPath:(id)arg1 ;
-(void)headerViewDidTapDismiss:(id)arg1 ;
-(T1PlaygroundSuggestsModule *)suggestsModule;
-(void)setSuggestsModule:(T1PlaygroundSuggestsModule *)arg1 ;
-(id)_defaultItemsWithObjects:(id)arg1 ;
-(void)_loadMoreUsers;
-(void)_userListDidUpdate:(id)arg1 ;
-(TFNTwitterUserRecommendationsList *)userList;
-(void)setUserList:(TFNTwitterUserRecommendationsList *)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end
