/* IL2CPP: Rotatelab.Scripts.WallController.<>c$$<Destroy>b__14_0
void Rotatelab_Scripts_WallController___c___Destroy_b__14_0 (Rotatelab_Scripts_WallController___c_o* __this, Rotatelab_Scripts_WallController_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.WallController.<>c$$<Destroy>b__14_0
   void Rotatelab_Scripts_WallController___c___Destroy_b__14_0
   (Rotatelab_Scripts_WallController___c_o* __this, Rotatelab_Scripts_WallController_o* this, const
   MethodInfo* method); */

void Rotatelab_Scripts_WallController___c___Destroy_b__14_0_105edf4(undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_0106eedc + 0x106ee0c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106eee0 + 0x106ee20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106eee4 + 0x106ee2c));
    *pcVar2 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(param_2 + 0x14) != '\0') {
    piVar3 = *(int **)(_UNK_0106eee8 + 0x106ee58);
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar3;
    }
    iVar4 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x60);
    iVar1 = UnityEngine_Component__get_transform_35fe190(param_2,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_position_36149b0(&uStack_24,iVar1,0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_Vector3___Raise_23a3428
              (iVar4,uStack_24,uStack_20,uStack_1c,**(undefined4 **)(_UNK_0106eeec + 0x106eec8));
  }
  return;
}

