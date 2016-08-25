/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)toolbarItems;
-(WADoneWithSpinnerBarButtonItem *)doneButton;
-(void)done:(id)arg1 ;
-(void)updateDoneButton;
-(BOOL)scrollEnabled;
@end
