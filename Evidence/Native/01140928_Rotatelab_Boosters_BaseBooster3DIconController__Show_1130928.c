/* IL2CPP: Rotatelab.Boosters.BaseBooster3DIconController$$Show
void Rotatelab_Boosters_BaseBooster3DIconController__Show (Rotatelab_Boosters_BaseBooster3DIconController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BaseBooster3DIconController$$Show
   void Rotatelab_Boosters_BaseBooster3DIconController__Show
   (Rotatelab_Boosters_BaseBooster3DIconController_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_BaseBooster3DIconController__Show_1130928(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_GameObject__get_gameObject_3602cac(*(int *)(param_1 + 0x10),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  pcVar3 = (char *)(_UNK_01140a10 + 0x1140994);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01140a14 + 0x11409a8));
    *pcVar3 = '\x01';
  }
  iVar2 = *(int *)(**(int **)(_UNK_01140a18 + 0x11409bc) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar1,*(float *)(iVar2 + 0xc) * _UNK_01140a0c,*(float *)(iVar2 + 0x10) * _UNK_01140a0c,
             *(float *)(iVar2 + 0x14) * _UNK_01140a0c,0);
  return;
}

