/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/SKPContactsListViewController.h>

@class MKTokenFieldBar, UIView, UISegmentedControl, NSMutableArray, SKPActivityToken, NSArray;

@interface SKPContactsPickerViewController : SKPContactsListViewController {

	BOOL _shouldShowContactFilter;
	BOOL _hasAppeared;
	MKTokenFieldBar* _tokenFieldBar;
	unsigned long long _maximumSelectionSize;
	UIView* _filterContainerView;
	UISegmentedControl* _segmentedControl;
	NSMutableArray* _selectedItemsDuringEditMode;
	SKPActivityToken* _modalActivity;
	NSArray* _filterViewConstraints;

}

@property (nonatomic,retain) UIView * filterContainerView;                              //@synthesize filterContainerView=_filterContainerView - In the implementation block
@property (nonatomic,retain) MKTokenFieldBar * tokenFieldBar;                           //@synthesize tokenFieldBar=_tokenFieldBar - In the implementation block
@property (nonatomic,retain) UISegmentedControl * segmentedControl;                     //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (assign,nonatomic) BOOL hasAppeared;                                          //@synthesize hasAppeared=_hasAppeared - In the implementation block
@property (nonatomic,retain) NSMutableArray * selectedItemsDuringEditMode;              //@synthesize selectedItemsDuringEditMode=_selectedItemsDuringEditMode - In the implementation block
@property (nonatomic,retain) SKPActivityToken * modalActivity;                          //@synthesize modalActivity=_modalActivity - In the implementation block
@property (nonatomic,retain) NSArray * filterViewConstraints;                           //@synthesize filterViewConstraints=_filterViewConstraints - In the implementation block
@property (assign,nonatomic) unsigned long long maximumSelectionSize;                   //@synthesize maximumSelectionSize=_maximumSelectionSize - In the implementation block
@property (nonatomic,copy,readonly) NSArray * selectedContacts; 
@property (assign,nonatomic) BOOL shouldShowContactFilter;                              //@synthesize shouldShowContactFilter=_shouldShowContactFilter - In the implementation block
+(Class)tokenFieldBarClass;
+(id)contactsCacheName;
+(id)favoritesCacheName;
+(BOOL)shouldBeLiveCallAware;
+(BOOL)shouldBeConnectionAware:(id)arg1 ;
-(id)viewConstraints;
-(UIView *)filterContainerView;
-(id)viewConstraintsForFilter;
-(void)setFilterViewConstraints:(NSArray *)arg1 ;
-(NSArray *)filterViewConstraints;
-(void)setTokenFieldBar:(MKTokenFieldBar *)arg1 ;
-(unsigned long long)maximumSelectionSize;
-(MKTokenFieldBar *)tokenFieldBar;
-(BOOL)shouldShowContactFilter;
-(void)didContactFilterChange:(id)arg1 ;
-(SKPActivityToken *)modalActivity;
-(void)setModalActivity:(SKPActivityToken *)arg1 ;
-(void)setHasAppeared:(BOOL)arg1 ;
-(BOOL)hasAppeared;
-(NSMutableArray *)selectedItemsDuringEditMode;
-(void)saveSelectedConversationsIfNeeded;
-(void)contactsListAdapter:(id)arg1 controllerDidChangeAllContent:(id)arg2 ;
-(void)refreshSelectedConversationIfNeeded;
-(void)contactsListAdapter:(id)arg1 didRemoveItemToToken:(id)arg2 atIndexPath:(id)arg3 ;
-(void)contactsListAdapter:(id)arg1 didAddItemToToken:(id)arg2 atIndexPath:(id)arg3 ;
-(void)contactsListAdapter:(id)arg1 didChangeState:(long long)arg2 ;
-(void)contactsListAdapterShouldJumpToFavorites:(id)arg1 ;
-(void)contactsListAdapterWillReloadTable:(id)arg1 ;
-(void)contactsListAdapterDidReloadTable:(id)arg1 ;
-(void)contactsListAdapterShouldRelayout:(id)arg1 ;
-(void)setMaximumSelectionSize:(unsigned long long)arg1 ;
-(void)setShouldShowContactFilter:(BOOL)arg1 ;
-(void)setFilterContainerView:(UIView *)arg1 ;
-(void)setSelectedItemsDuringEditMode:(NSMutableArray *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIEdgeInsets)contentInsets;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UISegmentedControl *)segmentedControl;
-(NSArray *)selectedContacts;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
@end
