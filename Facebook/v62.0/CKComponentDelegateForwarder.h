/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:53 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class UIView;

@interface CKComponentDelegateForwarder : NSObject {

	vector<SEL *, std::__1::allocator<SEL *> >* _selectors;
	UIView* _view;

}

@property (assign,nonatomic,__weak) UIView * view;              //@synthesize view=_view - In the implementation block
+(id)newWithSelectors:(vector<SEL *, std::__1::allocator<SEL *> >*)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
@end
