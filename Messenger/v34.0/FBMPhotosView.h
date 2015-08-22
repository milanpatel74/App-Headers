/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBMPhotoViewDelegate.h>

@protocol FBMPhotosViewDelegate;
@class FBMPhotoViewImageDownloadController, NSArray, UIColor, NSMutableArray, NSString;

@interface FBMPhotosView : UIView <FBMPhotoViewDelegate> {

	FBMPhotoViewImageDownloadController* _photoViewImageDownloadController;
	NSArray* _photoViewModels;
	id<FBMPhotosViewDelegate> _delegate;
	UIColor* _borderColor;
	NSMutableArray* _photoViews;

}

@property (nonatomic,copy) NSArray * photoViewModels;                                //@synthesize photoViewModels=_photoViewModels - In the implementation block
@property (assign,nonatomic,__weak) id<FBMPhotosViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                  //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,retain) NSMutableArray * photoViews;                            //@synthesize photoViews=_photoViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeForSinglePhotoViewModel:(id)arg1 ;
+(long long)contentModeForSinglePhotoViewModel:(id)arg1 ;
+(CGSize)sizeForPhotoViewModels:(id)arg1 ;
-(void)didSelectPhotoView:(id)arg1 ;
-(NSArray *)photoViewModels;
-(void)setPhotoViewModels:(NSArray *)arg1 ;
-(void)setPhotoViews:(NSMutableArray *)arg1 ;
-(void)removePhotoViews;
-(NSMutableArray *)photoViews;
-(void)addPhotoViews;
-(id)initWithFrame:(CGRect)arg1 photoViewImageDownloadController:(id)arg2 ;
-(void)configureWithPhotoViewModels:(id)arg1 ;
-(void)handleLongPress:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBMPhotosViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBMPhotosViewDelegate>)delegate;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)setBorderColor:(UIColor *)arg1 ;
-(BOOL)canResignFirstResponder;
-(UIColor *)borderColor;
-(void)delete:(id)arg1 ;
@end
