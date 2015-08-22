/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class FBExperimentManager, FBExperimentListViewController, NSArray, NSDictionary;

@interface FBExperimentListViewControllerDataSource : NSObject {

	FBExperimentManager* _manager;
	FBExperimentListViewController* _controller;
	NSArray* _allSectionKeys;
	NSArray* _existingSectionKeys;
	NSDictionary* _sortedExperimentsByKey;
	NSArray* _allExperimentNamesAndIndices;
	NSArray* _sortedExperimentName;

}

@property (nonatomic,readonly) unsigned long long numberOfSections; 
@property (nonatomic,readonly) FBExperimentManager * manager;                                 //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic,__weak) FBExperimentListViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,copy) NSArray * allSectionKeys;                                          //@synthesize allSectionKeys=_allSectionKeys - In the implementation block
@property (nonatomic,copy) NSArray * existingSectionKeys;                                     //@synthesize existingSectionKeys=_existingSectionKeys - In the implementation block
@property (nonatomic,copy) NSDictionary * sortedExperimentsByKey;                             //@synthesize sortedExperimentsByKey=_sortedExperimentsByKey - In the implementation block
@property (nonatomic,copy) NSArray * allExperimentNamesAndIndices;                            //@synthesize allExperimentNamesAndIndices=_allExperimentNamesAndIndices - In the implementation block
@property (nonatomic,copy) NSArray * sortedExperimentName;                                    //@synthesize sortedExperimentName=_sortedExperimentName - In the implementation block
-(NSArray *)allExperimentNamesAndIndices;
-(NSArray *)allSectionKeys;
-(NSArray *)existingSectionKeys;
-(id)experimentAtIndexPath:(id)arg1 ;
-(NSDictionary *)sortedExperimentsByKey;
-(id)_sectionKeyForExperimentName:(id)arg1 ;
-(id)experimentWitExperimentName:(id)arg1 ;
-(void)setAllSectionKeys:(NSArray *)arg1 ;
-(void)setExistingSectionKeys:(NSArray *)arg1 ;
-(void)setSortedExperimentsByKey:(NSDictionary *)arg1 ;
-(void)setAllExperimentNamesAndIndices:(NSArray *)arg1 ;
-(NSArray *)sortedExperimentName;
-(void)setSortedExperimentName:(NSArray *)arg1 ;
-(void)refresh;
-(unsigned long long)numberOfRowsInSection:(long long)arg1 ;
-(unsigned long long)numberOfSections;
-(FBExperimentListViewController *)controller;
-(void)setController:(FBExperimentListViewController *)arg1 ;
-(FBExperimentManager *)manager;
-(id)initWithManager:(id)arg1 ;
@end
