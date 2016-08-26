/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:53 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SCNNode.h>

@class MQEventHandler, MQFaceModel;

@interface MQFaceView : SCNNode {

	MQEventHandler* onChangeHandler;
	MQFaceModel* _model;

}

@property (nonatomic,retain) MQFaceModel * model;              //@synthesize model=_model - In the implementation block
-(void)onChange:(id)arg1 ;
-(MQFaceModel *)model;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(MQFaceModel *)arg1 ;
-(void)destroy;
@end
