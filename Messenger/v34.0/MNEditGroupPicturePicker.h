/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Messenger/ThreadImagePickerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNEditGroupPicturePickerDelegate;
@class FBUserSession, MNNavigationCoordinator, NSString, UIAlertController, UIActionSheet, NSArray, ThreadImagePicker, FBCurrentCountryManager;

@interface MNEditGroupPicturePicker : NSObject <UIActionSheetDelegate, ThreadImagePickerDelegate, FBClassProvidable> {

	FBUserSession* _session;
	MNNavigationCoordinator* _navigationCoordinator;
	id<MNEditGroupPicturePickerDelegate> _delegate;
	NSString* _analyticsModule;
	UIAlertController* _alertController;
	UIActionSheet* _actionSheet;
	NSArray* _actionSheetButtons;
	ThreadImagePicker* _threadImagePicker;
	FBCurrentCountryManager* _countryManager;

}

@property (assign,nonatomic,__weak) id<MNEditGroupPicturePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * analyticsModule;                                          //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                               //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic,__weak) UIActionSheet * actionSheet;                                //@synthesize actionSheet=_actionSheet - In the implementation block
@property (nonatomic,copy) NSArray * actionSheetButtons;                                        //@synthesize actionSheetButtons=_actionSheetButtons - In the implementation block
@property (nonatomic,retain) ThreadImagePicker * threadImagePicker;                             //@synthesize threadImagePicker=_threadImagePicker - In the implementation block
@property (nonatomic,retain) FBCurrentCountryManager * countryManager;                          //@synthesize countryManager=_countryManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)analyticsModule;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(void)_logEvent:(id)arg1 ;
-(void)didPickThreadImage:(id)arg1 picker:(id)arg2 ;
-(void)threadImagePickerControllerDidCancel:(id)arg1 ;
-(NSArray *)actionSheetButtons;
-(void)setActionSheetButtons:(NSArray *)arg1 ;
-(void)_removePicture;
-(void)_tappedActionAtIndex:(long long)arg1 ;
-(void)setThreadImagePicker:(ThreadImagePicker *)arg1 ;
-(void)_pickerDidPickImage:(id)arg1 ;
-(void)_didSelectImagePickerWithSourceType:(long long)arg1 ;
-(void)showFromBarButtonItem:(id)arg1 withRect:(CGRect)arg2 inView:(id)arg3 showRemove:(BOOL)arg4 ;
-(ThreadImagePicker *)threadImagePicker;
-(FBCurrentCountryManager *)countryManager;
-(void)setCountryManager:(FBCurrentCountryManager *)arg1 ;
-(void)_pickerDidCancel;
-(void)dealloc;
-(void)setDelegate:(id<MNEditGroupPicturePickerDelegate>)arg1 ;
-(id<MNEditGroupPicturePickerDelegate>)delegate;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)dismiss;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(void)_cancel;
-(UIActionSheet *)actionSheet;
-(void)setActionSheet:(UIActionSheet *)arg1 ;
@end
