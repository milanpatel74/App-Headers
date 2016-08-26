/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKStatefulViewComponent.h>

@class NSString, FBUserSession;

@interface FBCollectionComponent : CKStatefulViewComponent {

	/*function pointer*/void* _listComponentProviderFunction;
	/*function pointer*/void* _componentContextFunction;
	NSString* _analyticsModule;
	FBUserSession* _session;
	CGSize _size;
	FBCollectionComponentOptions _options;

}

@property (assign,nonatomic) /*function pointer*/void* listComponentProviderFunction;              //@synthesize listComponentProviderFunction=_listComponentProviderFunction - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* componentContextFunction;                   //@synthesize componentContextFunction=_componentContextFunction - In the implementation block
@property (nonatomic,copy) NSString * analyticsModule;                                             //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (assign,nonatomic) FBCollectionComponentOptions options;                                 //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                              //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) CGSize size;                                                          //@synthesize size=_size - In the implementation block
+(id)newWithChildrenListComponent:(/*function pointer*/void*)arg1 context:(/*function pointer*/void*)arg2 analyticsModule:(id)arg3 options:(FBCollectionComponentOptions)arg4 session:(id)arg5 ;
+(id)initialState;
-(NSString *)analyticsModule;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(/*function pointer*/void*)listComponentProviderFunction;
-(void)setListComponentProviderFunction:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)componentContextFunction;
-(void)setComponentContextFunction:(/*function pointer*/void*)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setOptions:(FBCollectionComponentOptions)arg1 ;
-(FBCollectionComponentOptions)options;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end
