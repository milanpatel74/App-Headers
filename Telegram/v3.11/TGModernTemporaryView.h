/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class TGModernViewStorage, NSArray;

@interface TGModernTemporaryView : UIView {

	TGModernViewStorage* _viewStorage;
	NSArray* _boundItems;

}

@property (nonatomic,retain) TGModernViewStorage * viewStorage;              //@synthesize viewStorage=_viewStorage - In the implementation block
@property (nonatomic,retain) NSArray * boundItems;                           //@synthesize boundItems=_boundItems - In the implementation block
-(void)setViewStorage:(TGModernViewStorage *)arg1 ;
-(void)setBoundItems:(NSArray *)arg1 ;
-(void)unbindItems;
-(TGModernViewStorage *)viewStorage;
-(NSArray *)boundItems;
-(void)dealloc;
@end
