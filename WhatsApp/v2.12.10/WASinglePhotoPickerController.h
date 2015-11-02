/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <WhatsApp/WAPhotoMoveAndScaleViewControllerDelegate.h>

@protocol WASinglePhotoPickerControllerDelegate;
@class NSString;

@interface WASinglePhotoPickerController : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, WAPhotoMoveAndScaleViewControllerDelegate> {

	long long _lastStatusBarStyle;
	BOOL _lastStatusBarHidden;
	BOOL _preferFrontCamera;
	id<WASinglePhotoPickerControllerDelegate> _delegate;
	long long _sourceType;
	double _minimumWidth;
	double _maximumWidth;

}

@property (assign,nonatomic,__weak) id<WASinglePhotoPickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long sourceType;                                                   //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) double minimumWidth;                                                    //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (assign,nonatomic) double maximumWidth;                                                    //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (assign,nonatomic) BOOL preferFrontCamera;                                                 //@synthesize preferFrontCamera=_preferFrontCamera - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)photoMoveAndScaleViewController:(id)arg1 didFinishWithImage:(id)arg2 ;
-(void)setPreferFrontCamera:(BOOL)arg1 ;
-(BOOL)preferFrontCamera;
-(void)performCustomPushTransitionOnNavigationController:(id)arg1 toViewController:(id)arg2 ;
-(void)setDelegate:(id<WASinglePhotoPickerControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<WASinglePhotoPickerControllerDelegate>)delegate;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)setMinimumWidth:(double)arg1 ;
-(void)setMaximumWidth:(double)arg1 ;
-(double)minimumWidth;
-(double)maximumWidth;
-(long long)sourceType;
-(void)setSourceType:(long long)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)presentFromViewController:(id)arg1 ;
@end

