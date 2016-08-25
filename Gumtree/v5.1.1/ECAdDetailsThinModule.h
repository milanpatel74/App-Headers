/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECThinModule.h>

@protocol ECAdDetailsManager;
@class ECAdDetailsConfig, ECSearchManager, NSObject, ECListDataProvider;

@interface ECAdDetailsThinModule : ECThinModule {

	BOOL _showContactButtons;
	ECAdDetailsConfig* _config;
	ECSearchManager* _searchManager;
	NSObject*<ECAdDetailsManager> _searchResultsManager;
	ECListDataProvider* _strongProvider;

}

@property (nonatomic,retain) ECSearchManager * searchManager;                                 //@synthesize searchManager=_searchManager - In the implementation block
@property (nonatomic,retain) NSObject*<ECAdDetailsManager> searchResultsManager;              //@synthesize searchResultsManager=_searchResultsManager - In the implementation block
@property (nonatomic,retain) ECListDataProvider * strongProvider;                             //@synthesize strongProvider=_strongProvider - In the implementation block
@property (assign,nonatomic) BOOL showContactButtons;                                         //@synthesize showContactButtons=_showContactButtons - In the implementation block
@property (nonatomic,retain) ECAdDetailsConfig * config;                                      //@synthesize config=_config - In the implementation block
+(id)moduleWithDataProvider:(id)arg1 withInitialAd:(id)arg2 showingContactButtons:(BOOL)arg3 ;
+(id)moduleWithAd:(id)arg1 ;
+(id)moduleWithSearchResultsManager:(id)arg1 withInitialAd:(id)arg2 showingContactButtons:(BOOL)arg3 ;
-(NSObject*<ECAdDetailsManager>)searchResultsManager;
-(void)setSearchResultsManager:(NSObject*<ECAdDetailsManager>)arg1 ;
-(void)createRootViewControllerWithDependencies:(id)arg1 ;
-(BOOL)showContactButtons;
-(void)setShowContactButtons:(BOOL)arg1 ;
-(void)setStrongProvider:(ECListDataProvider *)arg1 ;
-(void)createSearchResultsManager;
-(void)createSearchResultsManagerFromUserAds;
-(void)createSearchResultsManagerFromBrowseItemDataProvider;
-(id)itemsFromBrowseItemDataProvider:(id)arg1 ;
-(ECListDataProvider *)strongProvider;
-(id)identifier;
-(ECAdDetailsConfig *)config;
-(void)setConfig:(ECAdDetailsConfig *)arg1 ;
-(id)initWithConfig:(id)arg1 ;
-(ECSearchManager *)searchManager;
-(void)setSearchManager:(ECSearchManager *)arg1 ;
@end
