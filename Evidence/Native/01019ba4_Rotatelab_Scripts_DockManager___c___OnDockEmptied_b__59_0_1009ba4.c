/* IL2CPP: Rotatelab.Scripts.DockManager.<>c$$<OnDockEmptied>b__59_0
bool Rotatelab_Scripts_DockManager___c___OnDockEmptied_b__59_0 (Rotatelab_Scripts_DockManager___c_o* __this, Rotatelab_Scripts_UtilityDockController_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager.<>c$$<OnDockEmptied>b__59_0
   bool Rotatelab_Scripts_DockManager___c___OnDockEmptied_b__59_0
   (Rotatelab_Scripts_DockManager___c_o* __this, Rotatelab_Scripts_UtilityDockController_o* e, const
   MethodInfo* method); */

uint Rotatelab_Scripts_DockManager___c___OnDockEmptied_b__59_0_1009ba4
               (undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01019c34 + 0x1019bb8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01019c38 + 0x1019bcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01019c3c + 0x1019bd8));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                    (param_2,**(undefined4 **)(_UNK_01019c40 + 0x1019bf8));
  uVar3 = extraout_r3;
  if (*(int *)(**(int **)(_UNK_01019c44 + 0x1019c10) + 0x74) == 0) {
    FUN_00ec3934();
    uVar3 = extraout_r3_00;
  }
  pcVar4 = (char *)(_UNK_03611948 + 0x36118fc);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0361194c + 0x3611910),0,0,uVar3,unaff_r4,unaff_r5);
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_03611950 + 0x3611924) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  uVar2 = UnityEngine_Object__CompareBaseObjects_3607f30(uVar1,0);
  return uVar2 ^ 1;
}

