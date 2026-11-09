/* IL2CPP: Rotatelab.Boosters.VacuumBoosterController.<>c$$<OnActivated>b__26_0
void Rotatelab_Boosters_VacuumBoosterController___c___OnActivated_b__26_0 (Rotatelab_Boosters_VacuumBoosterController___c_o* __this, Rotatelab_Boosters_VacuumBoosterController_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.VacuumBoosterController.<>c$$<OnActivated>b__26_0
   void Rotatelab_Boosters_VacuumBoosterController___c___OnActivated_b__26_0
   (Rotatelab_Boosters_VacuumBoosterController___c_o* __this,
   Rotatelab_Boosters_VacuumBoosterController_o* this, const MethodInfo* method); */

void Rotatelab_Boosters_VacuumBoosterController___c___OnActivated_b__26_0_1138d50
               (undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  
  pcVar6 = (char *)(_UNK_01148e0c + 0x1148d64);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148e10 + 0x1148d78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148e14 + 0x1148d84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148e18 + 0x1148d90));
    *pcVar6 = '\x01';
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01148e1c + 0x1148da4));
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 0x18);
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01148e20 + 0x1148dc4));
    Rotatelab_UI_PointerPressEventListener_PointerEvent___ctor_1110d58
              (uVar4,param_2,**(undefined4 **)(_UNK_01148e24 + 0x1148de4),0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar6 = (char *)(_UNK_01120c50 + 0x1120bd4);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01120c54 + 0x1120be8),uVar4,0);
      *pcVar6 = '\x01';
    }
    piVar5 = (int *)(iVar3 + 0x18);
    piVar8 = *(int **)(_UNK_01120c58 + 0x1120c00);
    iVar3 = *piVar5;
    while( true ) {
      piVar1 = (int *)System_Delegate__Combine_2bbca94(iVar3,uVar4,0);
      piVar7 = (int *)0x0;
      if ((piVar1 != (int *)0x0) && (piVar7 = piVar1, *piVar1 != *piVar8)) break;
      iVar2 = FUN_00efd180(piVar5,piVar7,iVar3);
      bVar9 = iVar2 == iVar3;
      iVar3 = iVar2;
      if (bVar9) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

