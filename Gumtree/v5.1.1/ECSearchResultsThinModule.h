/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECThinModule.h>

@class ECAppConfig, ECSearchAdsDataProvider, ECSearchManager, ECSearchResultsManager;

@interface ECSearchResultsThinModule : ECThinModule {

	ECAppConfig* _appConfig;
	ECSearchAdsDataProvider* _provider;
	ECSearchManager* _searchManager;
	ECSearchResultsManager* _searchResultsManager;

}

@property (nonatomic,retain) ECAppConfig * appConfig;                                    //@synthesize appConfig=_appConfig - In the implementation block
@property (nonatomic,retain) ECSearchAdsDataProvider * provider;                         //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) ECSearchManager * searchManager;                            //@synthesize searchManager=_searchManager - In the implementation block
@property (nonatomic,retain) ECSearchResultsManager * searchResultsManager;              //@synthesize searchResultsManager=_searchResultsManager - In the implementation block
-(void)setTrackingName:(id)arg1 ;
-(ECSearchResultsManager *)searchResultsManager;
-(void)setSearchResultsManager:(ECSearchResultsManager *)arg1 ;
-(void)createRootViewControllerWithDependencies:(id)arg1 ;
-(id)initWithDataProvider:(id)arg1 searchManager:(id)arg2 appConfig:(id)arg3 ;
-(id)initWithSearchResultsManager:(id)arg1 searchManager:(id)arg2 appConfig:(id)arg3 ;
-(id)identifier;
-(ECSearchAdsDataProvider *)provider;
-(void)setProvider:(ECSearchAdsDataProvider *)arg1 ;
-(ECAppConfig *)appConfig;
-(void)setAppConfig:(ECAppConfig *)arg1 ;
-(ECSearchManager *)searchManager;
-(void)setSearchManager:(ECSearchManager *)arg1 ;
@end
