/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class FBListComponent;

@interface FBListComponentController : NSObject {

	BOOL _hasLoaded;
	FBListComponent* _component;
	id<NSObject> _componentControllerContext;

}

@property (nonatomic,__weak,readonly) FBListComponent * component;                          //@synthesize component=_component - In the implementation block
@property (nonatomic,__weak,readonly) id<NSObject> componentControllerContext;              //@synthesize componentControllerContext=_componentControllerContext - In the implementation block
-(id<NSObject>)componentControllerContext;
-(void)componentWillDisappear;
-(void)componentDidAppear;
-(void)willAttachComponent:(id)arg1 ;
-(void)didAttachComponent;
-(void)didUnattachComponent;
-(void)didScrollToBottom;
-(void)didScrollToTop;
-(void)didPullToRefresh;
-(void)didRequestReload;
-(void)didRequestPrefetchingData;
-(void)componentWillAppear;
-(void)componentDidDisappear;
-(void)setComponentControllerContext:(id<NSObject>)arg1 ;
-(FBListComponent *)component;
-(void)didLoad;
@end
