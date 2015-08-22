/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@class T1ClearButton, T1SectionClearHeaderCell;

@interface T1ClearButtonGestureRecognizer : UIGestureRecognizer {

	T1ClearButton* _button;
	T1SectionClearHeaderCell* _clearCell;

}

@property (assign,nonatomic,__weak) T1ClearButton * button;                            //@synthesize button=_button - In the implementation block
@property (assign,nonatomic,__weak) T1SectionClearHeaderCell * clearCell;              //@synthesize clearCell=_clearCell - In the implementation block
-(T1SectionClearHeaderCell *)clearCell;
-(void)setClearCell:(T1SectionClearHeaderCell *)arg1 ;
-(T1ClearButton *)button;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setButton:(T1ClearButton *)arg1 ;
@end
