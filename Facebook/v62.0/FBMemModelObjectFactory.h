/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:50 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphStoreObjectFactory.h>

@class NSString;

@interface FBMemModelObjectFactory : NSObject <FBGraphStoreObjectFactory> {

	const NodeFactory* _nodeFactory;
	unique_ptr<facebook::mobile::graphstore::parser::GraphStoreGraphQLFactory, std::__1::default_delete<facebook::mobile::graphstore::parser::GraphStoreGraphQLFactory> >* _strategy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newFromRecordAndSnapshot:(unique_ptr<facebook::mobile::FBMemModel::detail::RecordAndSnapshot, std::__1::default_delete<facebook::mobile::FBMemModel::detail::RecordAndSnapshot> >*)arg1 ;
-(id)initWithNodeFactory:(const NodeFactory*)arg1 typeHelper:(const TypeHelper*)arg2 ;
-(id)allocFromTypeId:(unsigned)arg1 ;
-(id)newFromRecord:(const shared_ptr<const facebook::mobile::graphstore::Record>*)arg1 query:(id)arg2 source:(const shared_ptr<const facebook::mobile::graphstore::NodeSource>*)arg3 ;
-(const PlatformGraphQLFactory*)parsingStrategy;
-(const NodeFactory*)nodeFactory;
-(const GraphSchema*)graphSchema;
@end
