/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>

@protocol WAMediaPickerDataSource;
@class WADoneWithSpinnerBarButtonItem;

@interface WAMediaPickerBaseViewController : WATableViewController {

	BOOL _showDoneButton;
	id<WAMediaPickerDataSource> _mediaPickerDataSource;
	WADoneWithSpinnerBarButtonItem* _doneButton;

}

@property (assign,nonatomic,__weak) id<WAMediaPickerDataSource> mediaPickerDataSource;              //@synthesize mediaPickerDataSource=_mediaPickerDataSource - In the implementation block
@property (assign,nonatomic) BOOL showDoneButton;                                                   //@synthesize showDoneButton=_showDoneButton - In the implementation block
@property (nonatomic,readonly) WADoneWithSpinnerBarButtonItem * doneButton;                         //@synthesize doneButton=_doneButton - In the implementation block
-(void)setMediaPickerDataSource:(id<WAMediaPickerDataSource>)arg1 ;
-(void)setShowDoneButton:(BOOL)arg1 ;
-(id<WAMediaPickerDataSource>)mediaPickerDataSource;
-(BOOL)showDoneButton;
-(void)mediaPickerLibraryControllerWillBeginLoadingLibrary:(id)arg1 ;
-(void)mediaPickerLibraryControllerDidFinishLoadingLibrary:(id)arg1 ;
-(void)mediaPickerLibraryControllerDidUpdateAssetsGroups:(id)arg1 ;
-(void)updateDoneButton;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)toolbarItems;
-(WADoneWithSpinnerBarButtonItem *)doneButton;
-(void)done:(id)arg1 ;
-(BOOL)scrollEnabled;
@end

