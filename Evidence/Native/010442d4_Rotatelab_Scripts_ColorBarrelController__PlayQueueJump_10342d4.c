/* IL2CPP: Rotatelab.Scripts.ColorBarrelController$$PlayQueueJump
void Rotatelab_Scripts_ColorBarrelController__PlayQueueJump (Rotatelab_Scripts_ColorBarrelController_o* __this, bool isMovingToActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBarrelController$$PlayQueueJump
   void Rotatelab_Scripts_ColorBarrelController__PlayQueueJump
   (Rotatelab_Scripts_ColorBarrelController_o* __this, bool isMovingToActive, const MethodInfo*
   method); */

void Rotatelab_Scripts_ColorBarrelController__PlayQueueJump_10342d4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  float fVar4;
  float fVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  pcVar3 = (char *)(_UNK_01044418 + 0x10442f8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104441c + 0x104430c));
    *pcVar3 = '\x01';
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_localPosition_3613b6c(&uStack_48,iVar1,0);
    *(undefined1 *)(param_1 + 0x58) = 1;
    *(undefined4 *)(param_1 + 0x5c) = uStack_44;
  }
  uVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  fVar5 = *(float *)(param_1 + 0x5c);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_48,9,0);
  if (*(int *)(**(int **)(_UNK_01044420 + 0x1044394) + 0x74) == 0) {
    FUN_00ec3934();
  }
  fVar4 = 0.5;
  if (param_2 != 0) {
    fVar4 = 0.75;
  }
  PrimeTween_Tween__LocalPositionY_2ce5b74
            (&uStack_48,uVar2,fVar5,fVar4 + fVar5,0x3e000000,uStack_48,uStack_44,uStack_40,uStack_3c
             ,uStack_38,2,3,0,0,0,0);
  return;
}

