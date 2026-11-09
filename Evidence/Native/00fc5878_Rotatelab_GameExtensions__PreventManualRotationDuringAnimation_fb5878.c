/* IL2CPP: Rotatelab.GameExtensions$$PreventManualRotationDuringAnimation
PrimeTween_Sequence_o Rotatelab_GameExtensions__PreventManualRotationDuringAnimation (PrimeTween_Sequence_o sequence, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.GameExtensions$$PreventManualRotationDuringAnimation
   PrimeTween_Sequence_o Rotatelab_GameExtensions__PreventManualRotationDuringAnimation
   (PrimeTween_Sequence_o sequence, const MethodInfo* method); */

void Rotatelab_GameExtensions__PreventManualRotationDuringAnimation_fb5878
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_38 [16];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_00fc59f0 + 0xfc5894);
  uStack_1c = param_6;
  uStack_20 = param_5;
  uStack_28 = param_3;
  uStack_24 = param_4;
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc59f4 + 0xfc58bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc59f8 + 0xfc58c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc59fc + 0xfc58d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5a00 + 0xfc58e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5a04 + 0xfc58ec));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fc5a08 + 0xfc5900));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Scripts_CameraManager__PreventManualRotationWithinScope_ffbce8(iVar1,0);
  piVar5 = *(int **)(_UNK_00fc5a0c + 0xfc5930);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar3[8];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar5 + 0x5c);
    }
    uVar7 = *puVar3;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fc5a10 + 0xfc5978));
    System_Action_object____ctor_1f11414(iVar6,uVar7,**(undefined4 **)(_UNK_00fc5a14 + 0xfc5998),0);
    piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 0x20);
    *piVar5 = iVar6;
    thunk_FUN_00ec5080(piVar5,iVar6);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (auStack_38,&uStack_28,uVar2,iVar6,0,**(undefined4 **)(_UNK_00fc5a18 + 0xfc59cc));
  *param_1 = CONCAT44(uStack_24,uStack_28);
  param_1[1] = CONCAT44(uStack_1c,uStack_20);
  return;
}

