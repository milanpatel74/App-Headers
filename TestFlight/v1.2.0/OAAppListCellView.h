/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <UIKit/UIView.h>
#import <TestFlight/OABuyButtonDelegate.h>
#import <TestFlight/OASViewSizeChangedObserverDelegate.h>

@class OASAppContext, OASIconURLImageView, UILabel, OABuyButton, NSLayoutConstraint, OASViewSizeChangedObserver, NSString;

@interface OAAppListCellView : UIView <OABuyButtonDelegate, OASViewSizeChangedObserverDelegate> {

	OASAppContext* _appContext;
	OASIconURLImageView* _imageView;
	UILabel* _headline;
	UILabel* _expiresLabel;
	UILabel* _providerLabel;
	OABuyButton* _installButton;
	NSLayoutConstraint* _imageHeightConstraint;
	NSLayoutConstraint* _imageWidthConstraint;
	OASViewSizeChangedObserver* _installButtonSizeObserver;

}

@property (nonatomic,retain) OASAppContext * appContext;                                          //@synthesize appContext=_appContext - In the implementation block
@property (assign,nonatomic,__weak) OASIconURLImageView * imageView;                              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * headline;                                           //@synthesize headline=_headline - In the implementation block
@property (assign,nonatomic,__weak) UILabel * expiresLabel;                                       //@synthesize expiresLabel=_expiresLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * providerLabel;                                      //@synthesize providerLabel=_providerLabel - In the implementation block
@property (assign,nonatomic) OABuyButton * installButton;                                         //@synthesize installButton=_installButton - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * imageHeightConstraint;                          //@synthesize imageHeightConstraint=_imageHeightConstraint - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * imageWidthConstraint;                           //@synthesize imageWidthConstraint=_imageWidthConstraint - In the implementation block
@property (nonatomic,retain) OASViewSizeChangedObserver * installButtonSizeObserver;              //@synthesize installButtonSizeObserver=_installButtonSizeObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInstallButtonSizeObserver:(OASViewSizeChangedObserver *)arg1 ;
-(OASViewSizeChangedObserver *)installButtonSizeObserver;
-(void)observerObservedViewDidChangeSizes:(id)arg1 ;
-(NSLayoutConstraint *)imageHeightConstraint;
-(void)setImageHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageWidthConstraint;
-(void)setImageWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(OABuyButton *)installButton;
-(UILabel *)providerLabel;
-(void)layoutExpiredLabelText;
-(UILabel *)expiresLabel;
-(void)setExpiresLabel:(UILabel *)arg1 ;
-(void)setProviderLabel:(UILabel *)arg1 ;
-(void)setInstallButton:(OABuyButton *)arg1 ;
-(void)setHeadline:(UILabel *)arg1 ;
-(UILabel *)headline;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)awakeFromNib;
-(OASIconURLImageView *)imageView;
-(void)setImageView:(OASIconURLImageView *)arg1 ;
-(void)setAppContext:(OASAppContext *)arg1 ;
-(OASAppContext *)appContext;
@end
