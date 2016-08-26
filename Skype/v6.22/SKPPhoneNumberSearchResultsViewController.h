/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPArrayControlledTableViewController.h>
#import <Skype/SKPArrayControllerDelegate.h>

@class SKPDialpadModel, SKPArrayController, SKPSaveNumberFooterView, NSString;

@interface SKPPhoneNumberSearchResultsViewController : SKPArrayControlledTableViewController <SKPArrayControllerDelegate> {

	SKPDialpadModel* _dialpadModel;
	SKPArrayController* _contactsArrayController;
	SKPSaveNumberFooterView* _saveNumberFooterView;

}

@property (nonatomic,retain) SKPDialpadModel * dialpadModel;                              //@synthesize dialpadModel=_dialpadModel - In the implementation block
@property (nonatomic,retain) SKPArrayController * contactsArrayController;                //@synthesize contactsArrayController=_contactsArrayController - In the implementation block
@property (nonatomic,retain) SKPSaveNumberFooterView * saveNumberFooterView;              //@synthesize saveNumberFooterView=_saveNumberFooterView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicateForSearchingContactPhoneNumbersForString:(id)arg1 ;
-(void)setDialpadModel:(SKPDialpadModel *)arg1 ;
-(SKPDialpadModel *)dialpadModel;
-(void)controllerDidChangeAllContent:(id)arg1 ;
-(id)arrayController;
-(id)initWithDialpadModel:(id)arg1 ;
-(SKPArrayController *)contactsArrayController;
-(void)setContactsArrayController:(SKPArrayController *)arg1 ;
-(void)updateSaveNumberFooter;
-(BOOL)shouldPresentSaveNumberCell;
-(SKPSaveNumberFooterView *)saveNumberFooterView;
-(id)cellReuseIdentifiers;
-(Class)cellClassForReuseIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 withModelObject:(id)arg2 ;
-(void)didSelectModelObject:(id)arg1 ;
-(BOOL)canPresentSaveNumberCellBecauseOfEmptyOtherLists;
-(void)setSaveNumberFooterView:(SKPSaveNumberFooterView *)arg1 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)filterString;
@end
