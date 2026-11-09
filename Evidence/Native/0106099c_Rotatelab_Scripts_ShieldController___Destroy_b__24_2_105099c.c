/* IL2CPP: Rotatelab.Scripts.ShieldController$$<Destroy>b__24_2
void Rotatelab_Scripts_ShieldController___Destroy_b__24_2 (Rotatelab_Scripts_ShieldController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShieldController$$<Destroy>b__24_2
   void Rotatelab_Scripts_ShieldController___Destroy_b__24_2 (Rotatelab_Scripts_ShieldController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_ShieldController___Destroy_b__24_2_105099c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  pcVar4 = (char *)(_UNK_01060a18 + 0x10609b0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01060a1c + 0x10609c4));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01060a20 + 0x10609d8));
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 0x28);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar7 = (undefined4 *)(iVar5 + 0x10);
    uVar6 = 0;
    while( true ) {
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar5 + 0xc) <= (int)uVar6) break;
      if (*(uint *)(iVar5 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar2 = (int *)Rotatelab_Grid_GridManager__GetGridCell_1106d80
                                (iVar1,*puVar7,puVar7[1],puVar7[2]);
      iVar3 = *piVar2;
      bVar8 = iVar3 != param_1;
      if (bVar8) {
        piVar2 = piVar2 + 1;
        iVar3 = *piVar2;
      }
      if (!bVar8 || iVar3 == param_1) {
        *piVar2 = 0;
        thunk_FUN_00ec5080(piVar2,0);
      }
      puVar7 = puVar7 + 3;
      uVar6 = uVar6 + 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

