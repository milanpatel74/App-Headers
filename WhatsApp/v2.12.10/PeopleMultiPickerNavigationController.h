/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <WhatsApp/GroupViewControllerDelegate.h>
#import <WhatsApp/PeopleViewControllerDelegate.h>

@class GroupViewController, NSMutableDictionary, NSArray;

@interface PeopleMultiPickerNavigationController : UINavigationController <GroupViewControllerDelegate, PeopleViewControllerDelegate> {

	GroupViewController* _groupController;
	NSMutableDictionary* _peopleViewControllers;
	unsigned long long _pickerMode;
	long long _selectionLimit;
	long long _tag;
	NSArray* _selectedContacts;

}

@property (assign,nonatomic) unsigned long long pickerMode;                                                                                  //@synthesize pickerMode=_pickerMode - In the implementation block
@property (assign,nonatomic) long long selectionLimit;                                                                                       //@synthesize selectionLimit=_selectionLimit - In the implementation block
@property (assign,nonatomic) long long tag;                                                                                                  //@synthesize tag=_tag - In the implementation block
@property (nonatomic,retain) NSArray * selectedContacts;                                                                                     //@synthesize selectedContacts=_selectedContacts - In the implementation block
@property (assign,nonatomic,__weak) id<PeopleMultiPickerNavigationControllerDelegate><UINavigationControllerDelegate> delegate; 
-(long long)selectionLimit;
-(void)setSelectionLimit:(long long)arg1 ;
-(void)setSelectedContacts:(NSArray *)arg1 ;
-(void)loadPeopleViewController:(int)arg1 ;
-(void)loadGroupViewController;
-(void)groupViewController:(id)arg1 didSelectGroupWithID:(id)arg2 ;
-(void)groupViewControllerDidCancel:(id)arg1 ;
-(void)peopleViewControllerDidCancel:(id)arg1 ;
-(void)peopleViewController:(id)arg1 didSelectContacts:(id)arg2 ;
-(NSArray *)selectedContacts;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)pickerMode;
-(void)setPickerMode:(unsigned long long)arg1 ;
@end

