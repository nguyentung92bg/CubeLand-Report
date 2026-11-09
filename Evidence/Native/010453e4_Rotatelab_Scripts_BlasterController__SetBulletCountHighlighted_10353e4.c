/* IL2CPP: Rotatelab.Scripts.BlasterController$$SetBulletCountHighlighted
void Rotatelab_Scripts_BlasterController__SetBulletCountHighlighted (Rotatelab_Scripts_BlasterController_o* __this, bool isHighlighted, UnityEngine_Color_o highlightColor, Il2CppObject* caller, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$SetBulletCountHighlighted
   void Rotatelab_Scripts_BlasterController__SetBulletCountHighlighted
   (Rotatelab_Scripts_BlasterController_o* __this, bool isHighlighted, UnityEngine_Color_o
   highlightColor, Il2CppObject* caller, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__SetBulletCountHighlighted_10353e4
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  pcVar5 = (char *)(_UNK_010455f8 + 0x104540c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010455fc + 0x1045424));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01045600 + 0x1045430));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01045604 + 0x104543c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01045608 + 0x1045448));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104560c + 0x1045454));
    *pcVar5 = '\x01';
  }
  if ((param_2 != 0) || (*(int *)(param_1 + 0x6c) == param_7)) {
    pcVar5 = (char *)(param_1 + 0x58);
    if (*pcVar5 == '\0') {
      piVar6 = *(int **)(param_1 + 0x54);
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piVar6 + 0x170))(&uStack_48,piVar6,*(undefined4 *)(*piVar6 + 0x174));
      uVar4 = uStack_3c;
      uVar3 = uStack_40;
      uVar2 = uStack_44;
      uVar1 = uStack_48;
      uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_48 = 0;
      uStack_38 = 0;
      System_Nullable_Color____ctor_17d76e8
                (&uStack_48,uVar1,uVar2,uVar3,uVar4,**(undefined4 **)(_UNK_01045610 + 0x10454d4));
      *(undefined4 *)pcVar5 = uStack_48;
      *(undefined4 *)(param_1 + 0x5c) = uStack_44;
      *(undefined4 *)(param_1 + 0x60) = uStack_40;
      *(undefined4 *)(param_1 + 100) = uStack_3c;
      *(undefined4 *)(param_1 + 0x68) = uStack_38;
    }
    if (param_2 == 0) {
      param_7 = 0;
    }
    *(int *)(param_1 + 0x6c) = param_7;
    thunk_FUN_00ec5080((int *)(param_1 + 0x6c),param_7);
    if (param_2 == 0) {
      System_Nullable_Color___get_Value_17d7704
                (&uStack_48,pcVar5,**(undefined4 **)(_UNK_01045614 + 0x1045540));
      param_5 = uStack_40;
      param_6 = uStack_3c;
      param_4 = uStack_44;
      param_3 = uStack_48;
    }
    piVar6 = *(int **)(param_1 + 0x54);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar6 + 0x170))(&uStack_48,piVar6,*(undefined4 *)(*piVar6 + 0x174));
    uVar1 = uStack_3c;
    if (*(int *)(**(int **)(_UNK_01045618 + 0x104558c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Extensions__WithOpacity_fc175c(&uStack_48,param_3,param_4,param_5,param_6,uVar1,0);
    (**(code **)(*piVar6 + 0x178))
              (piVar6,uStack_48,uStack_44,uStack_40,uStack_3c,*(undefined4 *)(*piVar6 + 0x17c));
  }
  return;
}

