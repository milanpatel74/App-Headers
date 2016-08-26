/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBBugReportViewScreenshotViewDelegate.h>

@protocol FBBugReportViewScreenshotAnnotationDelegate;
@class FBBugReportViewScreenshotView, NSString, UIImage, UIColor;

@interface FBBugReportViewScreenshotViewController : UIViewController <FBBugReportViewScreenshotViewDelegate> {

	id<FBBugReportViewScreenshotAnnotationDelegate> _delegate;
	FBBugReportViewScreenshotView* _viewScreenshotView;
	NSString* _fname;
	UIImage* _image;
	CGPoint _previousPoint;
	BOOL _explicitCancelBarButton;
	UIColor* _backgroundColor;

}

@property (assign) BOOL explicitCancelBarButton;                     //@synthesize explicitCancelBarButton=_explicitCancelBarButton - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapCancelButton;
-(void)didTapDoneButton;
-(BOOL)fb_showNavBarSearchField;
-(id)initWithImage:(id)arg1 delegate:(id)arg2 ;
-(void)setExplicitCancelBarButton:(BOOL)arg1 ;
-(CGPoint)pointForTouch:(id)arg1 ;
-(BOOL)explicitCancelBarButton;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end
