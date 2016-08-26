/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNBusinessView.h>

@protocol MNBusinessCTAHandling, MNBusinessViewProvider;
@class NSMutableArray, FBImageDownloader, MNBusinessStackedContainerViewModel, NSString;

@interface MNBusinessStackedContainerView : UIView <MNBusinessView> {

	NSMutableArray* _elements;
	id<MNBusinessCTAHandling> _ctaHandler;
	FBImageDownloader* _imageDownloader;
	id<MNBusinessViewProvider> _viewProvider;
	MNBusinessStackedContainerViewModel* _viewModel;

}

@property (nonatomic,copy) MNBusinessStackedContainerViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 viewProvider:(Class)arg3 ;
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 ctaHandler:(id)arg3 viewProvider:(id)arg4 ;
-(void)_initializeSubviews;
-(void)layoutSubviews;
-(MNBusinessStackedContainerViewModel *)viewModel;
-(void)_updateLayout;
-(void)setViewModel:(MNBusinessStackedContainerViewModel *)arg1 ;
@end
