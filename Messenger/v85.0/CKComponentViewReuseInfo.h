/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, NSMutableArray;

@interface CKComponentViewReuseInfo : NSObject {

	UIView* _view;
	/*^block*/id _didEnterReusePoolBlock;
	/*^block*/id _willLeaveReusePoolBlock;
	NSMutableArray* _childViewInfos;
	BOOL _hidden;
	BOOL _ancestorHidden;

}
-(id)initWithView:(id)arg1 didEnterReusePoolBlock:(/*^block*/id)arg2 willLeaveReusePoolBlock:(/*^block*/id)arg3 ;
-(void)registerChildViewInfo:(id)arg1 ;
-(void)willUnhide;
-(void)ancestorDidHide;
-(void)ancestorWillUnhide;
-(void)didHide;
@end
