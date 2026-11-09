/* IL2CPP: Rotatelab.Networking.HiroController$$AuthenticateSatoriAsync
Cysharp_Threading_Tasks_UniTask_ISession__o Rotatelab_Networking_HiroController__AuthenticateSatoriAsync (Rotatelab_Networking_HiroController_o* __this, Satori_IClient_o* client, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$AuthenticateSatoriAsync
   Cysharp_Threading_Tasks_UniTask_ISession__o
   Rotatelab_Networking_HiroController__AuthenticateSatoriAsync
   (Rotatelab_Networking_HiroController_o* __this, Satori_IClient_o* client, const MethodInfo*
   method); */

void Rotatelab_Networking_HiroController__AuthenticateSatoriAsync_114b670
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar1 = (char *)(_UNK_0115b77c + 0x115b690);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b780 + 0x115b6a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b784 + 0x115b6b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b788 + 0x115b6bc));
    *pcVar1 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_24 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_40 = 0;
  uStack_44 = 0;
  uStack_3c = 0;
  thunk_FUN_00ec5080((uint)&uStack_48 | 4);
  uStack_34 = param_2;
  thunk_FUN_00ec5080(&uStack_34,param_2);
  uStack_38 = param_3;
  thunk_FUN_00ec5080(&uStack_38,param_3);
  uStack_48 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_0115b78c + 0x115b730) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_Networking_HiroController__AuthenticateSatoriAsync_d__75__MoveNext_1152394(&uStack_48);
  func_0x010808ac(&uStack_58,(uint)&uStack_48 | 4,**(undefined4 **)(_UNK_0115b790 + 0x115b75c));
  *(undefined4 *)(param_1 + 1) = uStack_50;
  *param_1 = uStack_58;
  return;
}

