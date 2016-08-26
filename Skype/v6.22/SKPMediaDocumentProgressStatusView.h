/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIView.h>
#import <Skype/SKPMediaDocumentStatusViewProtocol.h>

@class MKCircularProgressView, NSString;

@interface SKPMediaDocumentProgressStatusView : UIView <SKPMediaDocumentStatusViewProtocol> {

	MKCircularProgressView* _progressView;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) MKCircularProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                         //@synthesize contentInsets=_contentInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setProgressView:(MKCircularProgressView *)arg1 ;
-(MKCircularProgressView *)progressView;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
@end
