/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface T1ScrollableImageViewCell : UICollectionViewCell {

	BOOL _yDirectionUp;
	double _currentOffset;
	unsigned long long _transitionType;
	UIImageView* _imageView;

}

@property (assign,nonatomic) BOOL yDirectionUp;                              //@synthesize yDirectionUp=_yDirectionUp - In the implementation block
@property (assign,nonatomic) double currentOffset;                           //@synthesize currentOffset=_currentOffset - In the implementation block
@property (assign,nonatomic) unsigned long long transitionType;              //@synthesize transitionType=_transitionType - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
-(void)setYDirectionUp:(BOOL)arg1 ;
-(void)_applyEffect;
-(BOOL)yDirectionUp;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(unsigned long long)transitionType;
-(void)setTransitionType:(unsigned long long)arg1 ;
-(void)setCurrentOffset:(double)arg1 ;
-(double)currentOffset;
@end
