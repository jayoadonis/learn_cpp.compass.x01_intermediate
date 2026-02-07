#ifndef __X01_DESIGN_PATTERN_CREATIONAL_SHARED_MODEL_X00_IPRODUCT_H
#define __X01_DESIGN_PATTERN_CREATIONAL_SHARED_MODEL_X00_IPRODUCT_H

namespace x01_design_pattern::creational::shared::model::x00 {
  class IProduct {
    protected:
      explicit IProduct();
    private:
      explicit IProduct(IProduct const&) = delete;
      explicit IProduct(IProduct &&) noexcept = delete;
      IProduct &operator=(IProduct const&) = delete;
      IProduct &operator=(IProduct &&) noexcept = delete;
    public:
      virtual ~IProduct() noexcept;
      virtual void prepare() = 0;
  };
}
#endif
