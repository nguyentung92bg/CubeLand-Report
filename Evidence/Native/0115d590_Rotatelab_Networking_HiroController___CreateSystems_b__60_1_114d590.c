/* IL2CPP: Rotatelab.Networking.HiroController$$<CreateSystems>b__60_1
System_Threading_Tasks_Task_ISession__o* Rotatelab_Networking_HiroController___CreateSystems_b__60_1 (Rotatelab_Networking_HiroController_o* __this, Satori_IClient_o* client, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$<CreateSystems>b__60_1
   System_Threading_Tasks_Task_ISession__o*
   Rotatelab_Networking_HiroController___CreateSystems_b__60_1
   (Rotatelab_Networking_HiroController_o* __this, Satori_IClient_o* client, const MethodInfo*
   method); */

void Rotatelab_Networking_HiroController___CreateSystems_b__60_1_114d590
               (undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar1 = (char *)(_UNK_0115d6b4 + 0x115d5ac);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115d6b8 + 0x115d5c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115d6bc + 0x115d5cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115d6c0 + 0x115d5d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115d6c4 + 0x115d5e4));
    *pcVar1 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_3c = CONCAT44(uStack_28,uStack_2c);
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_24 = uStack_34;
  if (*(int *)(**(int **)(_UNK_0115d6c8 + 0x115d608) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17c081c
            (&uStack_50,**(undefined4 **)(_UNK_0115d6cc + 0x115d630));
  uVar2 = (uint)&uStack_40 | 4;
  uStack_34 = uStack_48;
  uStack_3c = uStack_50;
  thunk_FUN_00ec5080(uVar2,0);
  uStack_30 = param_1;
  thunk_FUN_00ec5080(&uStack_30,param_1);
  uStack_2c = param_2;
  thunk_FUN_00ec5080(&uStack_2c,param_2);
  uStack_40 = 0xffffffff;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_HiroController___CreateSystems_b__60_1_d__12232bc
            (uVar2,&uStack_40,**(undefined4 **)(_UNK_0115d6d0 + 0x115d688));
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17c0838
            (uVar2,**(undefined4 **)(_UNK_0115d6d4 + 0x115d6a4));
  return;
}

