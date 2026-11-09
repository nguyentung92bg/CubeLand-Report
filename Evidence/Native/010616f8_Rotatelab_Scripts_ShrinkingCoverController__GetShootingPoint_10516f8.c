/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$GetShootingPoint
UnityEngine_Vector3_o Rotatelab_Scripts_ShrinkingCoverController__GetShootingPoint (Rotatelab_Scripts_ShrinkingCoverController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$GetShootingPoint
   UnityEngine_Vector3_o Rotatelab_Scripts_ShrinkingCoverController__GetShootingPoint
   (Rotatelab_Scripts_ShrinkingCoverController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ShrinkingCoverController__GetShootingPoint_10516f8
               (undefined8 *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar2 = (char *)(_UNK_0106180c + 0x1061714);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01061810 + 0x1061728));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01061814 + 0x1061734));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01061818 + 0x1061740));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0106181c + 0x1061754));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  iVar1 = *(int *)(iVar1 + 0x50);
  if (*(int *)(**(int **)(_UNK_01061820 + 0x1061774) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__PickRandom_Vector3Int__14878d8
            (&uStack_28,uVar3,**(undefined4 **)(_UNK_01061824 + 0x106179c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = VectorSignedToFloat(uStack_28,(byte)(in_fpscr >> 0x16) & 3);
  uVar5 = VectorSignedToFloat(uStack_24,(byte)(in_fpscr >> 0x16) & 3);
  uVar4 = VectorSignedToFloat(uStack_20,(byte)(in_fpscr >> 0x16) & 3);
  UnityEngine_Transform__TransformPoint_3616968(&uStack_28,iVar1,uVar3,uVar5,uVar4,0);
  *(undefined4 *)(param_1 + 1) = uStack_20;
  *param_1 = CONCAT44(uStack_24,uStack_28);
  return;
}

