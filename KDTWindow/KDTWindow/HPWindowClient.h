//
//  HPScriptClient.h
//  KDTPower
//
//  Created by wd on 16-3-28.
//
//

#import <Foundation/Foundation.h>
#import <XPCExt/XPCSerivce.h>
#import <XPCExt/NSXPCProxy.h>
#import <XPCExt/HPProtocol.h>


@interface HPWindowClient : XPCSerivce <SpringBoardClientProtocol>

@property (nonatomic,retain) NSXPCProxy* proxy;
@property (nonatomic,retain) xpc_connection_t peer;

+(id) sharedInstance;

-(void) onError: (xpc_object_t)event;

@end
